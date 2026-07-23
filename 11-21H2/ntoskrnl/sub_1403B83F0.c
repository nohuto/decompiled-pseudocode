/*
 * XREFs of sub_1403B83F0 @ 0x1403B83F0
 * Callers:
 *     sub_140AF71F0 @ 0x140AF71F0 (sub_140AF71F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140554244 @ 0x140554244 (sub_140554244.c)
 *     sub_140554988 @ 0x140554988 (sub_140554988.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B4EF88 @ 0x140B4EF88 (sub_140B4EF88.c)
 */

void __fastcall sub_1403B83F0(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  char v3; // al
  char v4; // [rsp+30h] [rbp-50h] BYREF
  char v5; // [rsp+31h] [rbp-4Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+40h] [rbp-40h]
  int v8; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v10[4]; // [rsp+60h] [rbp-20h] BYREF

  P = 0LL;
  v1 = 0;
  v10[0] = 2012912317;
  Handle = 0LL;
  dword_140C54DA0 = 0;
  v10[1] = 1295123289;
  v10[2] = -198680387;
  v10[3] = 1266192359;
  v9[0] = 8388734LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v5 = 0;
  v8 = 1;
  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2808) - 1) <= 1 )
    {
      xmmword_140C24540 = *(_OWORD *)(a1 + 2808);
      xmmword_140C24550 = *(_OWORD *)(a1 + 2824);
      v2 = sub_1406DE960(&Handle, 0LL, v9, 131097LL, 0);
      if ( v2 >= 0 )
      {
        if ( (int)sub_14067B838(Handle) < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)P + 3) )
          v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 == 1 )
        {
          byte_140D0189C = 1;
          v4 = 1;
        }
        else
        {
LABEL_14:
          byte_140D0189C = 0;
          if ( (unsigned int)xmmword_140C24540 >= 2 )
          {
            v3 = v4;
            if ( (BYTE8(xmmword_140C24540) & 4) != 0 )
              v3 = 4;
            v4 = v3;
          }
        }
        if ( (int)sub_14093E520(
                    (unsigned int)L"OfflineMemoryDumpUseCapability",
                    (unsigned int)v10,
                    (unsigned int)&v5,
                    (unsigned int)&v8,
                    0LL) < 0
          || v5 != v4 )
        {
          sub_14093E830((unsigned int)L"OfflineMemoryDumpUseCapability", (unsigned int)v10, (unsigned int)&v4, 1, 7);
        }
        if ( byte_140D0189C )
        {
          sub_140B4EF88(&Handle);
          sub_140554988();
          sub_140554244();
          if ( (int)sub_14067B838(Handle) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              dword_140D01108 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      else
      {
        dword_140C54DA0 = v2;
      }
    }
    else
    {
      dword_140C54DA0 = -1073741736;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_140C54DA0 = -1073741275;
  }
}
