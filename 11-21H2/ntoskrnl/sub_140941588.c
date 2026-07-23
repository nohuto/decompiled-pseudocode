/*
 * XREFs of sub_140941588 @ 0x140941588
 * Callers:
 *     sub_140941490 @ 0x140941490 (sub_140941490.c)
 * Callees:
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140941588(void *a1, GUID *a2)
{
  NTSTATUS v3; // eax
  _WORD *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // edx
  __int64 v7; // rcx
  _WORD *v8; // rcx
  wchar_t *v9; // rax
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  P = 0LL;
  v3 = sub_14067B838(a1, L"KsrGuid", 0, &P);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 && *((_DWORD *)P + 1) == 1 )
  {
    v6 = *((_DWORD *)P + 3);
    if ( v6 >= 2 )
    {
      v7 = *((unsigned int *)P + 2);
      if ( !*(_WORD *)((char *)P + 2 * ((unsigned __int64)v6 >> 1) + v7 - 2) )
      {
        v8 = (char *)P + v7;
        LODWORD(P) = 0;
        sub_14067AB94(v8, v6, (int *)&P);
        GuidString.MaximumLength = v4[6];
        v9 = (_WORD *)((char *)v4 + *((unsigned int *)v4 + 2));
        GuidString.Length = (unsigned __int16)P;
        GuidString.Buffer = v9;
        v5 = RtlGUIDFromString(&GuidString, a2);
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
