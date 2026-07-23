/*
 * XREFs of sub_1407ED774 @ 0x1407ED774
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407EC2C8 @ 0x1407EC2C8 (sub_1407EC2C8.c)
 *     sub_1407ED644 @ 0x1407ED644 (sub_1407ED644.c)
 *     sub_14099CBC8 @ 0x14099CBC8 (sub_14099CBC8.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1407ED774(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
{
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  if ( byte_140C5AE14 )
  {
    v4 = RegHandle;
    if ( EtwEventEnabled(RegHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      v6 = &v10;
      v7 = 4;
      EtwWrite(v4, EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
