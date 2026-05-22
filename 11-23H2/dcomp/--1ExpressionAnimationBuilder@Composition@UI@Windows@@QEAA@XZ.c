/*
 * XREFs of ??1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ @ 0x180093214
 * Callers:
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     ??_GExpressionAnimationBuilder@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x1800931EC (--_GExpressionAnimationBuilder@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::~ExpressionAnimationBuilder(void **this)
{
  HSTRING *v2; // rdi
  HSTRING *v3; // rsi
  _BYTE *v4; // rcx
  signed __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  HSTRING *v7; // rdi
  HSTRING *v8; // rsi
  _BYTE *v9; // rcx
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  void *v12; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp+28h] BYREF

  Windows::UI::Composition::ExpressionAnimationBuilder::Reset((Windows::UI::Composition::ExpressionAnimationBuilder *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 74);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 28);
  v2 = (HSTRING *)this[25];
  if ( v2 )
  {
    v3 = (HSTRING *)this[26];
    while ( v2 != v3 )
    {
      WindowsDeleteString(*v2);
      *v2++ = 0LL;
    }
    v4 = this[25];
    v5 = (_BYTE *)this[27] - v4;
    v12 = v4;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    v13 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v12, &v13);
      v4 = v12;
      v6 = v13;
    }
    operator delete(v4, v6);
    this[25] = 0LL;
    this[26] = 0LL;
    this[27] = 0LL;
  }
  v7 = (HSTRING *)this[22];
  if ( v7 )
  {
    v8 = (HSTRING *)this[23];
    while ( v7 != v8 )
    {
      WindowsDeleteString(*v7);
      *v7++ = 0LL;
    }
    v9 = this[22];
    v10 = (_BYTE *)this[24] - v9;
    v12 = v9;
    v11 = v10 & 0xFFFFFFFFFFFFFFF8uLL;
    v13 = v11;
    if ( v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v12, &v13);
      v9 = v12;
      v11 = v13;
    }
    operator delete(v9, v11);
    this[22] = 0LL;
    this[23] = 0LL;
    this[24] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 10);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 2);
}
