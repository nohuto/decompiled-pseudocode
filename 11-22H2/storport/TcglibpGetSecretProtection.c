/*
 * XREFs of TcglibpGetSecretProtection @ 0x1C007DECC
 * Callers:
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 *     TcglibpGetTableColumnData @ 0x1C007CA38 (TcglibpGetTableColumnData.c)
 */

__int64 __fastcall TcglibpGetSecretProtection(int **a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int *v7; // rcx
  bool v8; // zf
  int v9; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+54h] [rbp-1Ch]
  int v11; // [rsp+5Ch] [rbp-14h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]
  __int64 v14; // [rsp+B0h] [rbp+40h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  result = TcglibpGetTableColumnData((__int64)a1, a2, 0x80200000001LL, 0xAu, (__int64)&v14, 8, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    v11 = 0;
    v9 = 3;
    v10 = 3LL;
    v12 = 1;
    TcglibReverseBytes((char *)&v14, 8u);
    v7 = *a1;
    v8 = (v14 & 0xFFFFFFFF00000000uLL) == 0x80500000000LL;
    v14 &= 0xFFFFFFFF00000000uLL;
    TcglibEalLogCommand(v7, "GetSecretProtection", !v8 + 29, 22, 0LL, 0LL);
    return TcglibpCallMethod(
             (__int64)a1,
             a2,
             (v14 != 0x80500000000LL) + 0x1D0000001DLL,
             0x600000016LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenGetTableColumnParams,
             (__int64)&v9,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseSecretProtection,
             (__int64)a3);
  }
  return result;
}
