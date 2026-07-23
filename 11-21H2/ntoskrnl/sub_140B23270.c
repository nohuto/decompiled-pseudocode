/*
 * XREFs of sub_140B23270 @ 0x140B23270
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_1403D2D2C @ 0x1403D2D2C (sub_1403D2D2C.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140B232DC @ 0x140B232DC (sub_140B232DC.c)
 *     sub_140B23340 @ 0x140B23340 (sub_140B23340.c)
 */

NTSTATUS sub_140B23270()
{
  NTSTATUS result; // eax
  int v1; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  result = sub_140B23340(&Handle);
  if ( result >= 0 )
  {
    v2 = 0;
    if ( (int)sub_1403D2D2C(Handle, (__int64)L"WatchdogBugcheckEnabled", &v2) >= 0 )
      v1 = v2 != 0;
    else
      v1 = 2;
    dword_140C44938 = v1;
    sub_140B232DC(Handle);
    return ZwClose(Handle);
  }
  return result;
}
