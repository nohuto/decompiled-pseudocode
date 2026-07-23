/*
 * XREFs of sub_14024E928 @ 0x14024E928
 * Callers:
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_140229B04 @ 0x140229B04 (sub_140229B04.c)
 *     sub_140229BD8 @ 0x140229BD8 (sub_140229BD8.c)
 *     sub_14028F748 @ 0x14028F748 (sub_14028F748.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14024E928(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v4; // esi
  __int64 v8; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v13 = 0;
  while ( 1 )
  {
    v8 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(v8 + 24) = v11 + 1;
        if ( v11 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v12 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v12;
        if ( !v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v4 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  sub_140224100(a1);
  if ( v4 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
  return v4;
}
