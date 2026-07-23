/*
 * XREFs of sub_140A236A4 @ 0x140A236A4
 * Callers:
 *     sub_1407855F0 @ 0x1407855F0 (sub_1407855F0.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     sub_14094C428 @ 0x14094C428 (sub_14094C428.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_140B4FCB0 @ 0x140B4FCB0 (sub_140B4FCB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 */

__int64 __fastcall sub_140A236A4(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD v14[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = *(_QWORD *)(a1 + 504);
  v14[4] = a3;
  if ( v6 )
  {
    v7 = sub_14042A5E0(a1, a2);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = sub_140A245FC(a1);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v10 = sub_14042A5E0(a1, a2);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14[0];
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
