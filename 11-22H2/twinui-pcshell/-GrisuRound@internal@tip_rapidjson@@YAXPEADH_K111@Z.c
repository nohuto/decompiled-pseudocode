/*
 * XREFs of ?GrisuRound@internal@tip_rapidjson@@YAXPEADH_K111@Z @ 0x180654628
 * Callers:
 *     ?DigitGen@internal@tip_rapidjson@@YAXAEBUDiyFp@12@0_KPEADPEAH3@Z @ 0x1806540C8 (-DigitGen@internal@tip_rapidjson@@YAXAEBUDiyFp@12@0_KPEADPEAH3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tip_rapidjson::internal::GrisuRound(
        tip_rapidjson::internal *this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // r8

  if ( a4 < a6 )
  {
    do
    {
      if ( a3 - a4 < a5 )
        break;
      v7 = a4 + a5;
      if ( a4 + a5 >= a6 && a6 - a4 <= a5 + a4 - a6 )
        break;
      --*((_BYTE *)this + (int)a2 - 1);
      a4 += a5;
    }
    while ( v7 < a6 );
  }
}
