/*
 * XREFs of sub_140B10A4C @ 0x140B10A4C
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B10B2C @ 0x140B10B2C (sub_140B10B2C.c)
 */

NTSTATUS sub_140B10A4C()
{
  __int16 v0; // r14
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  void *v3; // rsi
  PVOID v4; // rdi
  NTSTATUS v5; // eax
  UNICODE_STRING v6; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+60h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h] BYREF
  void *v10; // [rsp+78h] [rbp+48h] BYREF

  P = 0LL;
  *(_DWORD *)(&v6.MaximumLength + 1) = 0;
  Handle = 0LL;
  v0 = 0;
  v6.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ServiceGroupOrder";
  v7 = 0;
  *(_DWORD *)&v6.Length = 9044104;
  result = sub_14082EF44(&Handle, 0LL, &v6, 0x20019u);
  if ( result >= 0 )
  {
    v2 = sub_14067B838(Handle, L"List", 0, &P);
    ZwClose(Handle);
    v3 = 0LL;
    v10 = 0LL;
    if ( v2 < 0 )
      return v2;
    v4 = P;
    if ( *((_DWORD *)P + 1) == 7 && *((_DWORD *)P + 3) )
    {
      v5 = sub_140B10B2C(P, &v10, &v7);
      v3 = v10;
      v2 = v5;
      v0 = v7;
    }
    else
    {
      v2 = -1073741823;
    }
    ExFreePoolWithTag(v4, 0);
    if ( v2 < 0 )
    {
      return v2;
    }
    else
    {
      qword_140C54EA0 = v3;
      result = 0;
      word_140C54E9C = v0;
    }
  }
  return result;
}
