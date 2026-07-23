/*
 * XREFs of sub_14076ABAC @ 0x14076ABAC
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 */

__int64 __fastcall sub_14076ABAC(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v8; // [rsp+50h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v3 = sub_14076E894(v2, &Handle, 131097LL);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&qword_140D00AC0 )
      v4 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
    else
      LODWORD(v4) = 0;
    v5 = sub_14077FFEC(v4, (_DWORD)Handle, (unsigned int)L"Devices", 0, 131097, (__int64)&v8);
    v3 = v5;
    if ( v5 >= 0 )
    {
      DWORD2(v7) = 0;
      *(_QWORD *)&v7 = a1;
      v3 = sub_14083EAEC(*(_QWORD *)&qword_140D00AC0, v8, sub_14095A750, &v7);
      if ( v3 >= 0 && SDWORD2(v7) < 0 )
        v3 = DWORD2(v7);
    }
    else if ( v5 == -1073741772 )
    {
      v3 = 0;
    }
  }
  if ( v8 )
    ZwClose(v8);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
