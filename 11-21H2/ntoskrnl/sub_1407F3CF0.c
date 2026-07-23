/*
 * XREFs of sub_1407F3CF0 @ 0x1407F3CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D1EB4 @ 0x1402D1EB4 (sub_1402D1EB4.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     ZwSetEvent @ 0x14041B920 (ZwSetEvent.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwResetEvent @ 0x14041E7A0 (ZwResetEvent.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_1407F3F88 @ 0x1407F3F88 (sub_1407F3F88.c)
 *     sub_1407F405C @ 0x1407F405C (sub_1407F405C.c)
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 */

NTSTATUS __fastcall sub_1407F3CF0(__int64 a1)
{
  unsigned __int16 *v1; // r14
  int v3; // ebx
  __int64 *v4; // r15
  _DWORD *v5; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // [rsp+B0h] [rbp+48h] BYREF
  int v12; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v13; // [rsp+C0h] [rbp+58h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+60h] BYREF

  v1 = (unsigned __int16 *)(a1 + 16);
  v11 = 1;
  Handle = 0LL;
  v12 = 0;
  v13 = 0;
  sub_1402D2774(&stru_140011B38, (unsigned __int16 *)(a1 + 16));
  sub_1402D2774(&stru_140011B28, v1);
  v3 = sub_1407F3F88(a1 + 32, a1 + 48, 0LL, &Handle);
  if ( v3 >= 0 )
  {
    v4 = (__int64 *)(a1 + 72);
    if ( (int)sub_14077FFEC(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72) < 0 )
    {
      *(_BYTE *)(a1 + 80) = 1;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 480) == 0xFFFFFFFFLL )
      {
        if ( (int)sub_14077DA5C(
                    *(__int64 *)&qword_140D00AC0,
                    *(_QWORD *)(a1 + 24),
                    7,
                    *v4,
                    0LL,
                    (__int64)qword_140011B88,
                    (__int64)&v11,
                    (__int64)&v13,
                    4,
                    (__int64)&v12,
                    0) >= 0
          && v11 == 7
          && v12 == 4 )
        {
          v7 = v13;
        }
        else
        {
          v7 = 120000LL;
          v13 = 120000;
        }
        if ( (_DWORD)v7 != -1 )
          *(_QWORD *)(a1 + 480) = -10000 * v7;
      }
      v5 = (_DWORD *)(a1 + 496);
      if ( *(_DWORD *)(a1 + 496) != 259 )
        goto LABEL_5;
      if ( (int)sub_14077DA5C(
                  *(__int64 *)&qword_140D00AC0,
                  *(_QWORD *)(a1 + 24),
                  7,
                  *v4,
                  0LL,
                  (__int64)qword_140011B70,
                  (__int64)&v11,
                  a1 + 492,
                  4,
                  (__int64)&v12,
                  0) < 0
        || v11 != 7
        || v12 != 4 )
      {
        *(_DWORD *)(a1 + 492) = 51;
      }
      if ( (int)sub_14077DA5C(
                  *(__int64 *)&qword_140D00AC0,
                  *(_QWORD *)(a1 + 24),
                  7,
                  *v4,
                  0LL,
                  (__int64)qword_140011B58,
                  (__int64)&v11,
                  a1 + 496,
                  4,
                  (__int64)&v12,
                  0) >= 0
        && v11 == 24
        && v12 == 4 )
      {
        if ( *v5 != 259 )
          goto LABEL_5;
      }
      else
      {
        *v5 = 259;
      }
      v8 = sub_140826270(a1, *(_QWORD *)(a1 + 24));
      v9 = *v4;
      v10 = *(_QWORD *)(a1 + 24);
      *v5 = v8;
      sub_14077198C(*(__int64 *)&qword_140D00AC0, v10, 7, v9, 0LL, (__int64)qword_140011B58, 24, a1 + 496, 4u, 0);
    }
LABEL_5:
    ZwClose(Handle);
    ZwResetEvent(*(HANDLE *)(a1 + 472), 0LL);
    v3 = sub_1407F405C(a1 + 32, *(_QWORD *)(a1 + 472));
    if ( v3 == 259 )
    {
      v3 = 0;
    }
    else
    {
      if ( v3 < 0 )
        v3 = 0;
      ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
    }
    goto LABEL_7;
  }
  if ( v3 == -1073741772 || v3 == -1073741766 )
    *(_BYTE *)(a1 + 80) = 1;
  if ( v3 == -1073741431 )
    v3 = -1073741077;
LABEL_7:
  *(_DWORD *)(a1 + 256) = v3;
  KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  result = sub_1402D1EB4(&stru_140011B48, v1, v3);
  if ( v3 < 0 )
    return sub_1402D1EB4(&stru_14000E348, v1, v3);
  return result;
}
