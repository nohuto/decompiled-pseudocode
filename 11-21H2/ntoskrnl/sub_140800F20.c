/*
 * XREFs of sub_140800F20 @ 0x140800F20
 * Callers:
 *     sub_140800808 @ 0x140800808 (sub_140800808.c)
 *     sub_140800BAC @ 0x140800BAC (sub_140800BAC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140800F20(__int64 a1)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // rax
  void *v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = stru_140C22250.Length + 22;
  DestinationString = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v2, 1684226640LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 2;
    memmove(Pool2 + 5, stru_140C22250.Buffer, stru_140C22250.Length);
    v6 = sub_140803250(a1, 553648129LL, v5, v4, v2);
    if ( v6 >= 0 )
    {
      v6 = sub_140803250(a1, 553648166LL, v7, v4, v2);
      if ( v6 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
        v6 = sub_140803250(a1, 570425346LL, v8, DestinationString.Buffer, (unsigned int)DestinationString.Length + 2);
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
