/*
 * XREFs of sub_140602F2C @ 0x140602F2C
 * Callers:
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406023D4 @ 0x1406023D4 (sub_1406023D4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140602F2C(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  int v4; // [rsp+38h] [rbp-49h] BYREF
  __int64 v5; // [rsp+40h] [rbp-41h] BYREF
  __int64 v6; // [rsp+48h] [rbp-39h] BYREF
  __int64 v7; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+58h] [rbp-29h] BYREF
  int *v9; // [rsp+78h] [rbp-9h]
  int v10; // [rsp+80h] [rbp-1h]
  int v11; // [rsp+84h] [rbp+3h]
  _BYTE v12[16]; // [rsp+88h] [rbp+7h] BYREF
  __int64 *v13; // [rsp+98h] [rbp+17h]
  int v14; // [rsp+A0h] [rbp+1Fh]
  int v15; // [rsp+A4h] [rbp+23h]
  __int64 *v16; // [rsp+A8h] [rbp+27h]
  int v17; // [rsp+B0h] [rbp+2Fh]
  int v18; // [rsp+B4h] [rbp+33h]
  __int64 *v19; // [rsp+B8h] [rbp+37h]
  int v20; // [rsp+C0h] [rbp+3Fh]
  int v21; // [rsp+C4h] [rbp+43h]

  Pool2 = ExAllocatePool2(64LL, 96LL, 1316118851LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = qword_140D049A8;
    *(_QWORD *)(Pool2 + 72) = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(Pool2 + 80) = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(Pool2 + 84) = *(_DWORD *)(a1 + 156);
    *(_DWORD *)(Pool2 + 88) = *(_DWORD *)(a1 + 120);
    sub_1406023D4((_WORD *)(Pool2 + 8), (unsigned __int16 *)(a1 + 88));
    qword_140D049A8 = v3;
    if ( qword_140D049B0 )
    {
      if ( (qword_140D01450 & 0x400000) != 0 && (unsigned int)dword_140C090C0 > 5 )
      {
        if ( sub_1402A2000((__int64)&dword_140C090C0, 0x800000000000LL) )
        {
          v11 = 0;
          v4 = dword_140C18FD4;
          v9 = &v4;
          v10 = 4;
          sub_1402A2094((__int64)v12, (const WCHAR *)(v3 + 8));
          v15 = 0;
          v18 = 0;
          v21 = 0;
          v13 = &v5;
          v6 = *(unsigned int *)(v3 + 84);
          v16 = &v6;
          v7 = *(unsigned int *)(v3 + 88);
          v19 = &v7;
          v5 = qword_140D049B8;
          v14 = 8;
          v17 = 8;
          v20 = 8;
          sub_14020A9C4((__int64)&dword_140C090C0, (unsigned __int8 *)byte_14003456B, 0LL, 0LL, 7u, &v8);
        }
      }
    }
  }
}
