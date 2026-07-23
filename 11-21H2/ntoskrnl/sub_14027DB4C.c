/*
 * XREFs of sub_14027DB4C @ 0x14027DB4C
 * Callers:
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 * Callees:
 *     sub_14027C6DC @ 0x14027C6DC (sub_14027C6DC.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14027DB4C(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rbp
  unsigned int v5; // esi
  struct _KWAIT_BLOCK *WaitBlockArray; // r15
  PVOID *v8; // rbx
  __int64 v9; // rdi
  PVOID *v10; // r8
  __int64 *v11; // rcx
  __int64 *v12; // r11
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r10
  __int64 **v16; // r10
  _QWORD *v18; // rax
  __int64 v19; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-118h] BYREF
  __int128 v21; // [rsp+50h] [rbp-108h]
  struct _KWAIT_BLOCK v22; // [rsp+60h] [rbp-F8h] BYREF

  v3 = a2 + 1;
  if ( !a3 )
    v3 = a2;
  v5 = a2;
  *(_OWORD *)Object = 0LL;
  v21 = 0LL;
  if ( a2 <= 3 )
    goto LABEL_4;
  v19 = sub_1402828F0(64LL, 56LL * (unsigned int)v3, 1633118541LL);
  v8 = (PVOID *)v19;
  if ( !v19 )
  {
    v5 = 3;
LABEL_4:
    WaitBlockArray = &v22;
    v8 = Object;
    goto LABEL_5;
  }
  WaitBlockArray = (struct _KWAIT_BLOCK *)(v19 + 8 * v3);
  do
  {
LABEL_5:
    v9 = 0LL;
    if ( v5 )
    {
      v10 = v8;
      while ( 2 )
      {
        v11 = *(__int64 **)((char *)v10 + a1 - (_QWORD)v8);
        while ( 1 )
        {
          v12 = (__int64 *)*v11;
          if ( *((_DWORD *)v11 + 28) != *((_DWORD *)v11 + 27) )
          {
            v13 = v11 + 15;
            while ( 1 )
            {
              v14 = (__int64 *)*v13;
              if ( !*(_DWORD *)(*v13 + 36) )
                break;
              if ( (__int64 *)v14[1] != v13
                || (v15 = *v14, *(__int64 **)(*v14 + 8) != v14)
                || (*v13 = v15, *(_QWORD *)(v15 + 8) = v13, v16 = (__int64 **)v11[16], *v16 != v13) )
              {
                __fastfail(3u);
              }
              *v14 = (__int64)v13;
              v14[1] = (__int64)v16;
              *v16 = v14;
              v11[16] = (__int64)v14;
              if ( ++*((_DWORD *)v11 + 28) == *((_DWORD *)v11 + 27) )
                goto LABEL_15;
            }
            v18 = v14 + 4;
            if ( v18 )
              break;
          }
LABEL_15:
          v11 = v12;
          if ( !v12 )
          {
            sub_14027C6DC(*(_DWORD **)(a1 + 8 * v9));
            if ( v8 != Object )
              ExFreePoolWithTag(v8, 0);
            return (unsigned int)v9;
          }
        }
        *v10 = v18;
        v9 = (unsigned int)(v9 + 1);
        ++v10;
        if ( (unsigned int)v9 < v5 )
          continue;
        break;
      }
    }
    if ( a3 )
    {
      v8[v9] = a3;
      LODWORD(v9) = v9 + 1;
    }
  }
  while ( KeWaitForMultipleObjects(v9, v8, WaitAny, WrVirtualMemory, 0, 0, 0LL, WaitBlockArray) != (_DWORD)v9 - 1 || !a3 );
  if ( v8 != Object )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)(v3 - 1);
}
