/*
 * XREFs of sub_14082975C @ 0x14082975C
 * Callers:
 *     sub_1409893F0 @ 0x1409893F0 (sub_1409893F0.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403C1E10 @ 0x1403C1E10 (sub_1403C1E10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14082975C()
{
  bool v0; // di
  __int64 v1; // rsi
  __int64 Pool2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi

  v0 = 0;
  v1 = 1LL;
  if ( !sub_1403C1E10() )
    v0 = (dword_140D0689C & 0x200) != 0;
  Pool2 = ExAllocatePool2(64LL, 32 * ((unsigned int)v0 + 1) + 120, 1766674512LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 19) = 1;
    *(_DWORD *)(Pool2 + 116) = v0 + 1;
    *(_DWORD *)(Pool2 + 120) = *(_DWORD *)(Pool2 + 120) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 136), L"HLT");
    *(_BYTE *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 80) = sub_1403CAB40;
    *(_QWORD *)(v3 + 88) = _misaligned_access;
    *(_QWORD *)(v3 + 96) = sub_140372B30;
    *(_QWORD *)(v3 + 104) = sub_140372B30;
    if ( v0 )
    {
      *(_QWORD *)(v3 + 40) = sub_14039B110;
      *(_QWORD *)(v3 + 48) = sub_14039E1C0;
      *(_QWORD *)(v3 + 64) = sub_14039E130;
      *(_QWORD *)(v3 + 80) = sub_14039E0F0;
      *(_QWORD *)(v3 + 88) = sub_14039E160;
      *(_DWORD *)(v3 + 152) = *(_DWORD *)(v3 + 152) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v3 + 168), L"Enlightened Idle");
      v1 = 2LL;
    }
    sub_1402D66A8((ULONG_PTR)&qword_140C23010);
    v4 = sub_140293A88((__int64)dword_140D06E40, (__int64)sub_1403D1850, v3, v1);
    sub_1402935D0((ULONG_PTR)&qword_140C23010);
    ExFreePoolWithTag((PVOID)v3, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
