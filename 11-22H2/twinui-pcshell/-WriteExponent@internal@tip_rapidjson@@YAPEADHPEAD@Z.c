/*
 * XREFs of ?WriteExponent@internal@tip_rapidjson@@YAPEADHPEAD@Z @ 0x180655E10
 * Callers:
 *     ?Prettify@internal@tip_rapidjson@@YAPEADPEADHHH@Z @ 0x1806552A0 (-Prettify@internal@tip_rapidjson@@YAPEADPEADHHH@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall tip_rapidjson::internal::WriteExponent(tip_rapidjson::internal *this, char *a2, char *a3)
{
  char *v3; // r9
  char *v4; // r8
  char *v5; // rcx
  char *v6; // rcx

  v3 = a2;
  if ( (int)this < 0 )
  {
    v3 = a2 + 1;
    *a2 = 45;
    LODWORD(this) = -(int)this;
  }
  v4 = v3 + 1;
  if ( (int)this < 100 )
  {
    if ( (int)this < 10 )
    {
      *v3 = (_BYTE)this + 48;
    }
    else
    {
      v6 = &`tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[2 * (int)this];
      *v3 = *v6;
      *v4 = v6[1];
      return v3 + 2;
    }
  }
  else
  {
    *v3 = (int)this / 100 + 48;
    v5 = &`tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[2 * ((int)this % 100)];
    *v4 = *v5;
    v3[2] = v5[1];
    return v3 + 3;
  }
  return v4;
}
