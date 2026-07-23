/*
 * XREFs of sub_1403C5C64 @ 0x1403C5C64
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B30860 @ 0x140B30860 (sub_140B30860.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402D26C0 @ 0x1402D26C0 (sub_1402D26C0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403C5C64(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // r14d
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF

  v4 = 0;
  v13[0] = 7209068LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v13[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v7 = 0;
  v8 = sub_14082EF44(&Handle, 0LL, v13, 131097LL);
  if ( v8 >= 0 )
  {
    v8 = sub_14067B838(Handle);
    if ( v8 >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v7 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( v7 >= 0xC8 )
        {
          if ( v7 > 0x2BF20 )
            v7 = 180000;
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        v8 = -1073741823;
      }
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  P = (PVOID)-2000000LL;
  RtlFreeUnicodeString(&UnicodeString);
  v9 = sub_14042A5E0(a1, a4);
  if ( v9 < 0 )
  {
    if ( v8 >= 0 )
      v4 = v7;
    do
    {
      if ( v4 <= 0 )
      {
        sub_1402D26C0();
        KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v9, 0LL, a2);
      }
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
      v4 -= 200;
      RtlFreeUnicodeString(&UnicodeString);
      v9 = sub_14042A5E0(a1, a4);
    }
    while ( v9 < 0 );
  }
  RtlFreeUnicodeString(&UnicodeString);
  return 0LL;
}
