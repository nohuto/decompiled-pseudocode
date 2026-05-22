/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1800738A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<HSTRING__ *,ParameterEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        HSTRING *FirstStruct,
        HSTRING *SecondStruct)
{
  int v3; // ebx
  HSTRING v4; // rsi
  PCWSTR StringRawBuffer; // rdi
  PCWSTR v6; // rax
  bool v7; // dl
  bool v8; // cl
  int v9; // eax

  v3 = 0;
  v4 = *SecondStruct;
  if ( *FirstStruct )
    StringRawBuffer = WindowsGetStringRawBuffer(*FirstStruct, 0LL);
  else
    StringRawBuffer = 0LL;
  if ( v4 )
    v6 = WindowsGetStringRawBuffer(v4, 0LL);
  else
    v6 = 0LL;
  v7 = !StringRawBuffer || !*StringRawBuffer;
  v8 = !v6 || !*v6;
  if ( v7 )
  {
    v9 = v8 - 1;
    goto LABEL_15;
  }
  if ( !v8 )
  {
    v9 = _wcsicmp_l(StringRawBuffer, v6, 0LL);
    if ( v9 < -1 )
      return 0LL;
    if ( v9 <= 1 )
    {
LABEL_15:
      if ( v9 >= 0 )
      {
        LOBYTE(v3) = v9 <= 0;
        return (unsigned int)(v3 + 1);
      }
      return 0LL;
    }
  }
  return 1LL;
}
