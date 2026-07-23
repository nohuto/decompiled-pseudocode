/*
 * XREFs of sub_140661090 @ 0x140661090
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E25B0 @ 0x1406E25B0 (sub_1406E25B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_140661090(HANDLE Handle, int a2)
{
  NTSTATUS v4; // eax
  PVOID v5; // rdi
  int v6; // ebx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+48h] [rbp-40h] BYREF

  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  sub_140347770((__int64)&v9);
  if ( (unsigned __int8)sub_140AB46D0() )
  {
    if ( a2 )
    {
      v6 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v4 = ObReferenceObjectByHandle(
             Handle,
             0x10u,
             qword_140C490F0,
             *((_BYTE *)KeGetCurrentThread() + 562),
             &Object,
             0LL);
      v5 = Object;
      v6 = v4;
      if ( v4 >= 0 )
      {
        sub_140AB4550(v10);
        v6 = sub_1406E25B0(v5);
        sub_140AB4580(v10);
        if ( v6 >= 0 )
          v6 = 0;
      }
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    sub_140AB42A0();
  }
  else
  {
    v6 = -1073741431;
  }
  sub_14022EA30((__int64 *)&v9);
  return (unsigned int)v6;
}
