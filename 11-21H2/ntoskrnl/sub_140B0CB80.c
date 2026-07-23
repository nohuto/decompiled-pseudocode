/*
 * XREFs of sub_140B0CB80 @ 0x140B0CB80
 * Callers:
 *     sub_140B0B9A8 @ 0x140B0B9A8 (sub_140B0B9A8.c)
 * Callees:
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0CD58 @ 0x140B0CD58 (sub_140B0CD58.c)
 *     sub_140B0D2E8 @ 0x140B0D2E8 (sub_140B0D2E8.c)
 */

__int64 __fastcall sub_140B0CB80(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // esi
  _BYTE *v5; // rdi
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  _BYTE *Pool2; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r11
  _QWORD *v15; // rcx
  __int64 v16; // r8
  signed __int64 v17; // rdx

  v2 = 0;
  v3 = sub_140B0CD58(a1, "Strings");
  v4 = v3;
  if ( !v3 )
    return (unsigned int)v2;
  v5 = qword_140C54D00;
  if ( !qword_140C54D00 )
  {
    qword_140C54D00 = (PVOID)ExAllocatePool2(256LL, 8LL * v3, 0x74694D45u);
    if ( qword_140C54D00 )
      goto LABEL_4;
    return (unsigned int)-1073741670;
  }
  qword_140C54D00 = (PVOID)ExAllocatePool2(256LL, 8LL * (v3 + dword_140C54CF0), 0x74694D45u);
  v15 = qword_140C54D00;
  if ( !qword_140C54D00 )
    return (unsigned int)-1073741670;
  if ( dword_140C54CF0 )
  {
    v16 = (unsigned int)dword_140C54CF0;
    v17 = v5 - (_BYTE *)qword_140C54D00;
    do
    {
      *v15 = *(_QWORD *)((char *)v15 + v17);
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  ExFreePoolWithTag(v5, 0x74694D45u);
LABEL_4:
  v6 = 0;
  while ( v6 < v4 )
  {
    v7 = sub_140B0D2E8(a1, "Strings", v6, 0LL);
    v8 = v7;
    if ( v7 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_BYTE *)(v7 + v9) );
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, v9 + 1, 0x74694D45u);
      *((_QWORD *)qword_140C54D00 + (unsigned int)dword_140C54CF0) = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(v8 + v11) );
      v2 = sub_14024F6E4(Pool2, v11 + 1, v8);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v13 + 8 * v12), 0x74694D45u);
        v2 = 0;
      }
      else
      {
        ++dword_140C54CF0;
      }
      ++v6;
    }
  }
  return (unsigned int)v2;
}
