/*
 * XREFs of sub_14080D164 @ 0x14080D164
 * Callers:
 *     sub_140808CE0 @ 0x140808CE0 (sub_140808CE0.c)
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14080D164(int a1, unsigned __int8 a2)
{
  int v2; // edi
  unsigned int v4; // r8d
  const char *v5; // r9
  NTSTATUS result; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( a1 < 2 )
  {
    v2 = a2;
    v4 = (unsigned __int8)(1 << a1);
    if ( a2 )
      _InterlockedOr(&dword_140CF7080, v4);
    else
      _InterlockedAnd(&dword_140CF7080, ~v4);
    sub_14036972C(4u);
    v5 = "indefinitely";
    if ( !(_BYTE)v2 )
      v5 = "temporarily";
    result = DbgPrintEx(0x92u, 3u, "Battery estimates spoiled %s by %d; mask=%x\n", v5, a1, dword_140CF7080);
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v7 = v2;
      v13 = &v8;
      v11 = 4;
      v8 = a1;
      v14 = 4;
      return sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_140030E0C, 0LL, 0LL, 4u, &v9);
    }
  }
  return result;
}
