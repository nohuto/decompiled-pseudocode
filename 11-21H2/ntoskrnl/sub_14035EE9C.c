/*
 * XREFs of sub_14035EE9C @ 0x14035EE9C
 * Callers:
 *     sub_14035EC68 @ 0x14035EC68 (sub_14035EC68.c)
 * Callees:
 *     sub_140210C6C @ 0x140210C6C (sub_140210C6C.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_14035EF6C @ 0x14035EF6C (sub_14035EF6C.c)
 *     sub_14035F144 @ 0x14035F144 (sub_14035F144.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035EE9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v8; // r14
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // bl
  __int64 v14; // rcx
  volatile signed __int64 *v15; // r11
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  volatile signed __int32 *v19; // rdi
  char v20; // si
  int v21; // [rsp+58h] [rbp+38h] BYREF
  volatile signed __int64 *v22; // [rsp+60h] [rbp+40h] BYREF
  __int64 v23; // [rsp+68h] [rbp+48h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  if ( !a2 )
    return sub_14035EF6C(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0LL;
  v21 = 0;
  while ( 1 )
  {
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v16 = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 24) = v16 + 1;
        if ( v16 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v18;
        if ( !v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v21, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = sub_140344DD0(a1, (__int64)&v23, (volatile signed __int32 **)&v22, a4);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v11) = v10;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v12 = v23;
  v13 = v10;
  sub_14035F144(a1, v11, v23);
  v15 = v22;
  if ( v13 == 1 && v22 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    v8 = KeGetCurrentPrcb();
    sub_140210C6C((__int64)v22, a1, *(_BYTE *)(a1 + 195));
    sub_1402F69A0(a1);
    v12 = v23;
  }
  sub_14035D0F8(v14, v12, v15);
  result = sub_140224100(a1);
  if ( v8 )
  {
    v19 = (volatile signed __int32 *)(a1 + 216);
    v20 = 0;
    *(_QWORD *)v19 = 0LL;
    v22 = 0LL;
    do
    {
      sub_1403405E0((__int64)v8, (ULONG_PTR)(v19 - 54), (__int64)&v22);
      v19 = (volatile signed __int32 *)v22;
      ++v20;
      if ( v22 )
        v22 = (volatile signed __int64 *)*v22;
      if ( (v20 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)v8 + 12760);
    }
    while ( v19 );
    return sub_140340300((unsigned __int8 *)v8 + 12760);
  }
  return result;
}
