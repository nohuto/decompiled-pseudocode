/*
 * XREFs of ParseBooleanData @ 0x1C007E460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 */

__int64 __fastcall ParseBooleanData(int **a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  int v7; // r8d
  char v8; // r8
  int v9; // r9d
  int v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) != 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v13 = MEMORY[0xC];
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
        MEMORY[8],
        v13);
    }
    v8 = 1;
    LOBYTE(v9) = MEMORY[8];
    v12 = MEMORY[0xC];
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_DWORD *)(v6 + 8);
  if ( (unsigned int)(v7 - 7) > 7 || *(_DWORD *)(v6 + 12) > 1u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v11 = *(_DWORD *)(v6 + 12);
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
        v7,
        v11);
    }
    v8 = 2;
    v9 = *(_DWORD *)(v6 + 8);
    v12 = *(unsigned int *)(v6 + 12);
LABEL_14:
    v4 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidBoolData", v8, v9, v12, 0LL);
    return v4;
  }
  *a4 = *(_BYTE *)(v6 + 16);
  return v4;
}
