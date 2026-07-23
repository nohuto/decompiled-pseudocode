/*
 * XREFs of sub_1409E386C @ 0x1409E386C
 * Callers:
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_1409EA6C0 @ 0x1409EA6C0 (sub_1409EA6C0.c)
 * Callees:
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140597560 @ 0x140597560 (sub_140597560.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14096B768 @ 0x14096B768 (sub_14096B768.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409E386C(__int64 a1, int *a2, unsigned int a3, char a4, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v8; // ebx
  char v9; // r12
  int v11; // [rsp+40h] [rbp-48h]
  _DWORD *v12; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+54h] [rbp-34h]
  __int64 *v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+64h] [rbp-24h]

  v8 = 0;
  if ( a3 > 4 )
  {
    if ( a3 <= 0xFFDD )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a2 + a3 > 0x7FFFFFFF0000LL || (int *)((char *)a2 + a3) < a2 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v11 = *a2;
      v9 = 0;
      if ( (*a2 & 1) != 0 && a4 )
      {
        if ( SeSinglePrivilegeCheck(stru_140D3CA18, PreviousMode) )
        {
          v9 = 1;
          sub_140597560();
        }
        else
        {
          v8 = -1073741727;
        }
      }
      v12 = a2 + 1;
      v13 = a3 - 4;
      v14 = 0;
      v15 = &qword_14000EF90;
      v16 = 2;
      v17 = 0;
      sub_1403AB658(
        *(_QWORD *)(a1 + 1096),
        (__int64)&v12,
        KeGetCurrentThread(),
        *(_DWORD *)a1,
        2u,
        0xF22u,
        0x3100u,
        PreviousMode,
        v11);
      if ( v9 )
        sub_14096B768(*(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 0x275u, 1);
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
