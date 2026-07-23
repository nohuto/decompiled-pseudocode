/*
 * XREFs of sub_140579F48 @ 0x140579F48
 * Callers:
 *     sub_140579F20 @ 0x140579F20 (sub_140579F20.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 */

__int64 __fastcall sub_140579F48(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  wchar_t *v6; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rdx
  int v18; // [rsp+38h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    v16 = *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(a1 + 33659) )
    {
      KeInterlockedClearProcessorAffinityEx((__int64)asc_140C0CD30, v16);
      v17 = 2LL;
    }
    else
    {
      KeInterlockedClearProcessorAffinityEx((__int64)asc_140C0CE40, v16);
      v17 = 0LL;
    }
    return sub_14057C888(a1, v17);
  }
  if ( *(_BYTE *)(a1 + 34060) )
  {
    if ( !*(_BYTE *)(a1 + 33659) )
      goto LABEL_7;
    v5 = *(_DWORD *)(a1 + 36);
    v6 = asc_140C0CD30;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 36);
    v6 = asc_140C0CE40;
  }
  KeInterlockedSetProcessorAffinityEx((__int64)v6, v5);
  result = sub_14057C888(a1, 1LL);
LABEL_7:
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v9 + 24);
        v11 = v10 == -1;
        result = (unsigned int)(v10 + 1);
        *(_DWORD *)(v9 + 24) = result;
        if ( v11 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v12 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v12 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v12 + 24) - 1;
        *(_DWORD *)(v12 + 24) = v13;
        if ( !v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
    {
      sub_1402F32E0(&v18, a2, a3, a4);
      result = *(_QWORD *)(a1 + 48);
    }
    while ( result );
  }
  *(_BYTE *)(a1 + 13241) = 0;
  *(_BYTE *)(a1 + 13243) = 0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v14 = KeGetCurrentPrcb();
  v15 = *((_QWORD *)v14 + 4375);
  if ( v15 )
  {
    if ( *((_BYTE *)v14 + 32) <= 1u )
    {
      result = (unsigned int)(*(_DWORD *)(v15 + 24) - 1);
      *(_DWORD *)(v15 + 24) = result;
      if ( !(_DWORD)result )
        return sub_140418E4C((__int64)v14);
    }
  }
  return result;
}
