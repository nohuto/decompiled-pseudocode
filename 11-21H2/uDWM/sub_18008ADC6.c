/*
 * XREFs of sub_18008ADC6 @ 0x18008ADC6
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180101D68 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 */

void __fastcall sub_18008ADC6(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  CLoginTransition *v16; // rcx

  v16 = *(CLoginTransition **)(a16 + 568);
  if ( v16 )
  {
    CLoginTransition::`scalar deleting destructor'(v16, a2);
    *(_QWORD *)(a16 + 568) = 0LL;
  }
  JUMPOUT(0x1800405A0LL);
}
