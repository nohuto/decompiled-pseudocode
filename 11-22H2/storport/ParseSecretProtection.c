/*
 * XREFs of ParseSecretProtection @ 0x1C007DC40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 *     WPP_SF_ddi @ 0x1C007E104 (WPP_SF_ddi.c)
 */

__int64 __fastcall ParseSecretProtection(int **a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 *v6; // rdi
  __int64 v8; // rsi
  int v9; // r9d
  char v10; // r8
  __int64 *i; // rdx
  int v12; // r9d
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+28h] [rbp-10h]

  v4 = 0;
  *a4 = 0LL;
  v6 = a3;
  if ( a3[1] != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_f4474686c3923574d740efc113fafe26_Traceguids,
        *((_DWORD *)a3 + 2),
        *((_DWORD *)a3 + 3));
    v15 = 0LL;
    v10 = 1;
    goto LABEL_35;
  }
  v6 = (__int64 *)a3[2];
  if ( v6[1] != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_f4474686c3923574d740efc113fafe26_Traceguids,
        *((_DWORD *)v6 + 2),
        *((_DWORD *)v6 + 3));
    v10 = 2;
    v15 = 0LL;
    v14 = *((unsigned int *)v6 + 3);
    goto LABEL_36;
  }
  v8 = v6[2];
  if ( *(_QWORD *)(v8 + 8) != 0x200000006LL || (v6 = *(__int64 **)(v8 + 16)) == 0LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_f4474686c3923574d740efc113fafe26_Traceguids,
        *(_DWORD *)(v8 + 8),
        *(_DWORD *)(v8 + 12));
    v10 = 3;
    v15 = 0LL;
    v12 = *(_DWORD *)(v8 + 8);
    v14 = *(unsigned int *)(v8 + 12);
    goto LABEL_37;
  }
  if ( (unsigned int)(*((_DWORD *)v6 + 2) - 7) > 7 || *((_DWORD *)v6 + 3) > 4u || v6[2] != 3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_ddi(WPP_GLOBAL_Control->AttachedDevice);
    v10 = 4;
    v15 = v6[2];
LABEL_35:
    v14 = *((unsigned int *)v6 + 3);
LABEL_36:
    v12 = *((_DWORD *)v6 + 2);
LABEL_37:
    v4 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidSecretProtection", v10, v12, v14, v15);
    return v4;
  }
  v6 = (__int64 *)*v6;
  v9 = *((_DWORD *)v6 + 2);
  if ( v9 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x12u,
        (__int64)&WPP_f4474686c3923574d740efc113fafe26_Traceguids,
        v9,
        *((_DWORD *)v6 + 3));
    v10 = 5;
    v15 = 0LL;
    v14 = *((unsigned int *)v6 + 3);
    goto LABEL_36;
  }
  for ( i = (__int64 *)v6[2]; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 2) == 8 )
      *a4 |= 1LL << *((_BYTE *)i + 16);
  }
  return v4;
}
