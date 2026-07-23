/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x140345D30
 * Callers:
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_1402F36BC @ 0x1402F36BC (sub_1402F36BC.c)
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_140343BA0 @ 0x140343BA0 (sub_140343BA0.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     sub_140520330 @ 0x140520330 (sub_140520330.c)
 *     sub_140521670 @ 0x140521670 (sub_140521670.c)
 *     sub_14052B860 @ 0x14052B860 (sub_14052B860.c)
 *     sub_14052C660 @ 0x14052C660 (sub_14052C660.c)
 *     sub_140571980 @ 0x140571980 (sub_140571980.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 *     sub_1405C7798 @ 0x1405C7798 (sub_1405C7798.c)
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 *     sub_1405C94E0 @ 0x1405C94E0 (sub_1405C94E0.c)
 *     sub_1405DD1A8 @ 0x1405DD1A8 (sub_1405DD1A8.c)
 *     sub_1405DD260 @ 0x1405DD260 (sub_1405DD260.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_14084A618 @ 0x14084A618 (sub_14084A618.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140A69A2C @ 0x140A69A2C (sub_140A69A2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = dword_140D0E5E0[a2];
  v4 = v3 >> 6;
  if ( (unsigned int)v4 >= *a1 )
    return 0LL;
  else
    return (*(_QWORD *)&a1[4 * v4 + 4] >> (v3 & 0x3F)) & 1LL;
}
