/*
 * XREFs of sub_140679ADC @ 0x140679ADC
 * Callers:
 *     sub_1406E8E20 @ 0x1406E8E20 (sub_1406E8E20.c)
 *     sub_14094B580 @ 0x14094B580 (sub_14094B580.c)
 *     sub_14094DD00 @ 0x14094DD00 (sub_14094DD00.c)
 *     sub_140B501D0 @ 0x140B501D0 (sub_140B501D0.c)
 *     sub_140B503E0 @ 0x140B503E0 (sub_140B503E0.c)
 * Callees:
 *     sub_14020881C @ 0x14020881C (sub_14020881C.c)
 *     sub_1402088F8 @ 0x1402088F8 (sub_1402088F8.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140679ADC(void *a1, void *a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  int v8; // ebx
  int v10; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v12; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v14[2]; // [rsp+60h] [rbp-10h] BYREF

  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v14[1] = v14;
  v10 = 1;
  v14[0] = v14;
  if ( (int)sub_140678874(a1, &SecurityDescriptor) >= 0 )
  {
    ZwSetSecurityObject(a2, 4u, SecurityDescriptor);
    ExFreePoolWithTag(SecurityDescriptor, 0);
  }
  v7 = sub_14020881C(v14, a1, a2, 1LL);
  while ( v7 >= 0 )
  {
    if ( !sub_1402088F8(v14, &Handle, &v12, &v10) )
      break;
    v8 = v10;
    v7 = sub_140679BEC(Handle, v10, (__int64)v14, a4);
    if ( (v8 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  while ( sub_1402088F8(v14, &Handle, &v12, &v10) )
  {
    if ( (v10 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  return (unsigned int)v7;
}
