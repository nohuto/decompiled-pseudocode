/*
 * XREFs of sub_18008E8DC @ 0x18008E8DC
 * Callers:
 *     <none>
 * Callees:
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x18012C1CC (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 */

void __fastcall sub_18008E8DC(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        PropertyChangedContext *a7)
{
  if ( a6 < 0 )
  {
    PropertyChangedContext::`scalar deleting destructor'(a7, a2);
    JUMPOUT(0x18001CCEELL);
  }
  JUMPOUT(0x18001CCAALL);
}
