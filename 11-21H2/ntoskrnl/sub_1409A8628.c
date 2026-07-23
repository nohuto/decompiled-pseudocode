/*
 * XREFs of sub_1409A8628 @ 0x1409A8628
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A1960 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A1A20 (TtmNotifyDeviceInput.c)
 *     sub_1409A1BAC @ 0x1409A1BAC (sub_1409A1BAC.c)
 *     sub_1409A1D70 @ 0x1409A1D70 (sub_1409A1D70.c)
 *     sub_1409A200C @ 0x1409A200C (sub_1409A200C.c)
 *     sub_1409A20D0 @ 0x1409A20D0 (sub_1409A20D0.c)
 *     sub_1409A21EC @ 0x1409A21EC (sub_1409A21EC.c)
 *     sub_1409A229C @ 0x1409A229C (sub_1409A229C.c)
 *     sub_1409A25D0 @ 0x1409A25D0 (sub_1409A25D0.c)
 *     sub_1409A2BAC @ 0x1409A2BAC (sub_1409A2BAC.c)
 *     sub_1409A2C7C @ 0x1409A2C7C (sub_1409A2C7C.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_1409A325C @ 0x1409A325C (sub_1409A325C.c)
 *     sub_1409A371C @ 0x1409A371C (sub_1409A371C.c)
 *     sub_1409A4208 @ 0x1409A4208 (sub_1409A4208.c)
 *     sub_1409A447C @ 0x1409A447C (sub_1409A447C.c)
 *     sub_1409A4510 @ 0x1409A4510 (sub_1409A4510.c)
 *     sub_1409A4584 @ 0x1409A4584 (sub_1409A4584.c)
 *     sub_1409A4620 @ 0x1409A4620 (sub_1409A4620.c)
 *     sub_1409A47BC @ 0x1409A47BC (sub_1409A47BC.c)
 *     sub_1409A49BC @ 0x1409A49BC (sub_1409A49BC.c)
 *     sub_1409A4A48 @ 0x1409A4A48 (sub_1409A4A48.c)
 *     sub_1409A4AE0 @ 0x1409A4AE0 (sub_1409A4AE0.c)
 *     sub_1409A4B90 @ 0x1409A4B90 (sub_1409A4B90.c)
 *     sub_1409A4DA8 @ 0x1409A4DA8 (sub_1409A4DA8.c)
 *     sub_1409A4E68 @ 0x1409A4E68 (sub_1409A4E68.c)
 *     sub_1409A50EC @ 0x1409A50EC (sub_1409A50EC.c)
 *     sub_1409A5188 @ 0x1409A5188 (sub_1409A5188.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A556C @ 0x1409A556C (sub_1409A556C.c)
 *     sub_1409A573C @ 0x1409A573C (sub_1409A573C.c)
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 *     sub_1409A5E3C @ 0x1409A5E3C (sub_1409A5E3C.c)
 *     sub_1409A6030 @ 0x1409A6030 (sub_1409A6030.c)
 *     sub_1409A6100 @ 0x1409A6100 (sub_1409A6100.c)
 *     sub_1409A61C4 @ 0x1409A61C4 (sub_1409A61C4.c)
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 *     sub_1409A651C @ 0x1409A651C (sub_1409A651C.c)
 *     sub_1409A666C @ 0x1409A666C (sub_1409A666C.c)
 *     sub_1409A6714 @ 0x1409A6714 (sub_1409A6714.c)
 *     sub_1409A6850 @ 0x1409A6850 (sub_1409A6850.c)
 *     sub_1409A6940 @ 0x1409A6940 (sub_1409A6940.c)
 *     sub_1409A69EC @ 0x1409A69EC (sub_1409A69EC.c)
 *     sub_1409A6AB0 @ 0x1409A6AB0 (sub_1409A6AB0.c)
 *     sub_1409A6B4C @ 0x1409A6B4C (sub_1409A6B4C.c)
 *     sub_1409A6C08 @ 0x1409A6C08 (sub_1409A6C08.c)
 *     sub_1409A6CB4 @ 0x1409A6CB4 (sub_1409A6CB4.c)
 *     sub_1409A6D68 @ 0x1409A6D68 (sub_1409A6D68.c)
 *     sub_1409A6E24 @ 0x1409A6E24 (sub_1409A6E24.c)
 *     sub_1409AB130 @ 0x1409AB130 (sub_1409AB130.c)
 *     sub_1409AB284 @ 0x1409AB284 (sub_1409AB284.c)
 *     sub_1409AB3EC @ 0x1409AB3EC (sub_1409AB3EC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409A8628(const CHAR *a1, int a2, int a3, int a4)
{
  int ProcessSessionId; // eax
  int v9; // r8d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  _BYTE v18[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( byte_140D3B210
    && (!dword_140D3B214 || dword_140D3B214 == a2)
    && (!dword_140D3B218 || dword_140D3B218 == a3)
    && (!dword_140D3B21C || dword_140D3B21C == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140D3B908, 2LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
      v17 = 0;
      v10 = ProcessSessionId;
      v16 = 4;
      v15 = &v10;
      sub_1403699D0((__int64)v18, a1);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = &v11;
      v20 = v9;
      v22 = &v12;
      v25 = &v13;
      v23 = v9;
      v26 = v9;
      v11 = a2;
      v12 = a3;
      v13 = a4;
      sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)byte_140032E51, 0LL, 0LL, 7u, &v14);
    }
  }
}
