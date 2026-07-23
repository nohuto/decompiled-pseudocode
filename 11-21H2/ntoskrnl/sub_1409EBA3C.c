/*
 * XREFs of sub_1409EBA3C @ 0x1409EBA3C
 * Callers:
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1409EC320 @ 0x1409EC320 (sub_1409EC320.c)
 */

__int64 __fastcall sub_1409EBA3C(int a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  int v13; // esi
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 **v16; // rbx
  __int64 *i; // rax
  int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 >= 0x40u )
  {
    v7 = *((_QWORD *)sub_140347DB0() + 108);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = v7 + 4096;
    ExAcquirePushLockExclusiveEx(v7 + 4096, 0LL);
    v10 = v7 + 4080;
    v18 = a1;
    v11 = *(_QWORD *)(v7 + 4080);
    v12 = 0;
    if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
    {
      if ( v11 )
        v11 ^= v10;
      else
        v11 = 0LL;
    }
    v13 = *(_BYTE *)(v10 + 8) & 1;
    if ( v11 )
    {
      do
      {
        v14 = sub_1409EC320(&v18, v11);
        if ( v14 >= 0 )
        {
          if ( v14 <= 0 )
            break;
          v15 = *(_QWORD *)(v11 + 8);
        }
        else
        {
          v15 = *(_QWORD *)v11;
        }
        if ( v13 && v15 )
          v11 ^= v15;
        else
          v11 = v15;
      }
      while ( v11 );
      if ( v11 )
      {
        v16 = (__int64 **)(v11 + 32);
        for ( i = *v16; i != (__int64 *)v16; i = (__int64 *)*i )
        {
          if ( *((_WORD *)i + 9) == a2 )
          {
            *a3 = *((_WORD *)i + 8);
            goto LABEL_23;
          }
        }
      }
    }
    v12 = -1073741162;
LABEL_23:
    ExReleasePushLockEx(v9, 0LL);
    KeLeaveCriticalRegion();
    return v12;
  }
  else
  {
    *a3 = a2;
    return 0LL;
  }
}
