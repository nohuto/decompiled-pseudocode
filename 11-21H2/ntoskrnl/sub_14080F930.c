/*
 * XREFs of sub_14080F930 @ 0x14080F930
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14080F930(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *(_OWORD *)v10 = 0LL;
  sub_140347770((__int64)v10);
  Object = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    v8 = -1073741727;
  }
  else if ( (unsigned __int8)sub_140AB46D0(v3, v2, v4) )
  {
    v8 = sub_140AB4630(a1, 131078, v5, 0, (__int64)&Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = sub_14080F9EC(Object);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    sub_140AB42A0(v7, v6);
  }
  else
  {
    v8 = -1073741431;
  }
  sub_14022EA30(v10);
  return (unsigned int)v8;
}
