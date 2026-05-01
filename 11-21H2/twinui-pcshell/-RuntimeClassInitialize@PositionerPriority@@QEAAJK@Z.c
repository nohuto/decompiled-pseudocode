/*
 * XREFs of ?RuntimeClassInitialize@PositionerPriority@@QEAAJK@Z @ 0x1804FA0A0
 * Callers:
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAK@Z @ 0x1804F9DB4 (--$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPri.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PositionerPriority::RuntimeClassInitialize(PositionerPriority *this, unsigned int a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rdx
  int v5; // r9d
  unsigned int *v6; // r11
  unsigned int i; // r10d
  unsigned __int8 v8; // cf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( !a2 )
  {
    v3 = 55LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
  if ( (((unsigned __int8)a2 ^ (unsigned __int8)(a2 >> 1)) & 1) == 0 )
  {
    v3 = 60LL;
    goto LABEL_3;
  }
  v5 = 0;
  v6 = (unsigned int *)&g_exclusivePositioners;
  for ( i = 0; i < 2; ++i )
  {
    v8 = _bittest((const int *)&a2, *v6++);
    v5 += v8;
  }
  if ( v5 > 1 )
  {
    v3 = 68LL;
    goto LABEL_3;
  }
  do
  {
    *((_BYTE *)this + v2 + 64) = ((1 << v2) & a2) != 0;
    ++v2;
  }
  while ( v2 < 0xA );
  return 0LL;
}
