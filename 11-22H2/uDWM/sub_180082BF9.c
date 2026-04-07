/*
 * XREFs of sub_180082BF9 @ 0x180082BF9
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180108F28 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 */

void __fastcall sub_180082BF9(
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

  v16 = *(CLoginTransition **)(a16 + 552);
  if ( v16 )
  {
    CLoginTransition::`scalar deleting destructor'(v16, a2);
    *(_QWORD *)(a16 + 552) = 0LL;
  }
  JUMPOUT(0x180040B7DLL);
}
