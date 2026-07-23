/*
 * XREFs of sub_140A62B5C @ 0x140A62B5C
 * Callers:
 *     sub_140A621A0 @ 0x140A621A0 (sub_140A621A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140A62B5C(__int64 a1)
{
  int v1; // r8d

  if ( !*(_QWORD *)(qword_140C54A88 + 152) )
  {
    v1 = -1073741637;
LABEL_5:
    sub_14051E038(qword_140C54A88, 28, v1, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x330u);
    return (unsigned int)v1;
  }
  v1 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), a1);
  if ( v1 < 0 )
    goto LABEL_5;
  return (unsigned int)v1;
}
