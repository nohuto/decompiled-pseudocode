/*
 * XREFs of HamCompleteActivityRestore @ 0x180014870
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_180001340 @ 0x180001340 (sub_180001340.c)
 *     HamFreeBuffer_0 @ 0x180009A20 (HamFreeBuffer_0.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall HamCompleteActivityRestore(__int64 a1, __int64 a2)
{
  char v4; // di
  int v6; // r15d
  __int64 v7; // r14
  _DWORD *v8; // r9
  void **v9; // r12
  __int64 v10; // r8
  int Pointer; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v16; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+18h]
  __int64 v19; // [rsp+B8h] [rbp+20h]

  v16 = a1;
  v4 = 1;
  if ( (unsigned int)dword_180032038 > 4 && (byte_180032048 & 1) != 0 && (qword_180032050 & 1) == qword_180032050 )
    sub_1800011A0((__int64)&dword_180032038, byte_18002A848);
  v6 = 1;
  v7 = a1 + 120;
  v19 = a1 + 120;
  sub_18001F1C4(a1 + 120);
  v9 = (void **)(a1 + 144);
  v10 = *(_QWORD *)(a1 + 144);
  if ( a2 == v10 )
  {
    v12 = 0LL;
    v8 = (_DWORD *)(a1 + 152);
    if ( *(_DWORD *)(a1 + 152) )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 136) + 160 * v12;
        if ( *(_QWORD *)(v10 + 8 * v12) != v13 )
          __int2c();
        if ( (*(_BYTE *)(v13 + 152) & 1) == 0 )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *v8 )
          goto LABEL_15;
      }
      Pointer = -1073741436;
    }
    else
    {
LABEL_15:
      v18 = a1 + 128;
      *(_DWORD *)(a1 + 128) = 0;
      RtlReleaseSRWLockExclusive(a1 + 120);
      v6 = 0;
      LODWORD(v17) = 0;
      if ( *(_QWORD *)(a1 + 8) )
        Pointer = HampInProcCompleteConnection();
      else
        Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 1u, 0LL, *(_QWORD *)a1).Pointer;
      if ( Pointer >= 0 )
      {
        sub_18001F1C4(a1 + 120);
        v14 = *(void **)(a1 + 136);
        if ( v14 )
        {
          HamFreeBuffer_0(v14);
          *(_QWORD *)(a1 + 136) = 0LL;
        }
        if ( *v9 )
        {
          HamFreeBuffer_0(*v9);
          *v9 = 0LL;
        }
        *(_DWORD *)(a1 + 152) = 0;
        *(_DWORD *)(a1 + 128) = 0;
        RtlReleaseSRWLockExclusive(v7);
        v6 = 0;
        Pointer = 0;
      }
    }
  }
  else
  {
    Pointer = -1073741584;
  }
  if ( v6 )
  {
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(v7);
  }
  if ( (unsigned int)dword_180032038 > 4 )
  {
    if ( (byte_180032048 & 3) == 0 || (qword_180032050 & 3) != qword_180032050 )
      v4 = 0;
    if ( v4 )
    {
      v17 = a1;
      LODWORD(v16) = Pointer;
      sub_180001340((__int64)&dword_180032038, byte_18002A98B, v10, (__int64)v8, (__int64)&v16, (__int64)&v17);
    }
  }
  return (unsigned int)Pointer;
}
