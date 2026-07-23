/*
 * XREFs of sub_140B1B688 @ 0x140B1B688
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_1406A0140 @ 0x1406A0140 (sub_1406A0140.c)
 *     sub_140B1B784 @ 0x140B1B784 (sub_140B1B784.c)
 *     sub_140B1B910 @ 0x140B1B910 (sub_140B1B910.c)
 */

__int64 __fastcall sub_140B1B688(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  v7 = 0;
  v6[1] = L"Kernel-WindowsMaxMemAllowedx64";
  v6[0] = 4063292LL;
  v8 = 4;
  if ( (int)sub_1406A0140((unsigned __int64)v6, &v9, &v7, 4u, &v8) >= 0 && v7 )
    v2 = (unsigned __int64)v7 << 8;
  else
    v2 = 0x80000LL;
  qword_140C50730 = v2;
  v3 = 0x3FFFFFF7FELL;
  if ( (unsigned __int64)(1LL << dword_140C50724) < 0x3FFFFFF7FELL )
    v3 = 1LL << dword_140C50724;
  if ( qword_140C50780 && v3 > (unsigned __int64)qword_140C50780 >> 12 )
    v3 = (unsigned __int64)qword_140C50780 >> 12;
  v4 = v3 - 1;
  if ( v4 == -1 )
    v4 = -1LL;
  sub_140B1B910(a1, v4);
  result = sub_140B1B784(a1, v2);
  qword_140C50840 = v4;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_140C52CE0 = 0x3FFFFFF7FELL;
  return result;
}
