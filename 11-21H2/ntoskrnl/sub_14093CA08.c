/*
 * XREFs of sub_14093CA08 @ 0x14093CA08
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14093CA08(__int64 a1)
{
  void *v2; // rdi
  NTSTATUS v3; // eax
  unsigned __int64 v4; // rcx
  UNICODE_STRING v5; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v6; // [rsp+68h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF

  Handle = 0LL;
  v5.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump";
  v2 = 0LL;
  *(_QWORD *)&v5.Length = 7864438LL;
  v6 = 0LL;
  if ( sub_1406DE960(&Handle, 0LL, &v5, 0x20019u, 0) >= 0 )
  {
    if ( sub_14067B838(Handle, L"UtilizeIOSpace", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFF7FF | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x800
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x800u;
    if ( sub_14067B838(Handle, L"MirrorSystemPartitionOnly", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFFDF | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x20
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x20u;
    if ( sub_14067B838(Handle, L"EnableInstrumentation", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFF7F | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x80
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x80u;
    if ( sub_14067B838(Handle, L"SkipDisablingInterrupts", 4, &v6) >= 0 && v6[1] == 4 && v6[3] == 4 )
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFEFF | (*(_DWORD *)((char *)v6 + (unsigned int)v6[2]) != 0
                                                                ? 0x100
                                                                : 0);
    else
      *(_DWORD *)(a1 + 80) &= ~0x100u;
    v3 = sub_14067B838(Handle, L"DumpFileSize", 4, &v6);
    v2 = v6;
    if ( v3 >= 0 && v6[1] == 4 && v6[3] == 4 )
    {
      v4 = (unsigned __int64)*(unsigned int *)((char *)v6 + (unsigned int)v6[2]) << 20;
      *(_DWORD *)(a1 + 80) |= 0x200u;
      *(_QWORD *)(a1 + 1136) = v4;
    }
    else
    {
      *(_DWORD *)(a1 + 80) &= ~0x200u;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 80) &= 0xFFFFF45F;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
