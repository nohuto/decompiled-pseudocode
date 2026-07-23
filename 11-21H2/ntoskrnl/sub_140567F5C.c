/*
 * XREFs of sub_140567F5C @ 0x140567F5C
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 *     sub_140579004 @ 0x140579004 (sub_140579004.c)
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140567038 @ 0x140567038 (sub_140567038.c)
 */

char __fastcall sub_140567F5C(unsigned int a1)
{
  _UNKNOWN **v1; // rax
  PVOID *v3; // rbx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  PVOID *v6; // [rsp+88h] [rbp+20h] BYREF

  v1 = &retaddr;
  v3 = (PVOID *)qword_140C2B810;
  if ( qword_140C2B810 && qword_140C2B818 )
  {
    v6 = &qword_140C2B810;
    while ( v3 != &qword_140C2B810 )
    {
      LOBYTE(v1) = sub_140567038((__int64)v3, a1, &v6);
      if ( (_BYTE)v1 )
      {
        LOBYTE(v1) = sub_14042A5E0(a1, v3);
        *((_BYTE *)v3 + 44) = 3;
      }
      else if ( !v6 )
      {
        return (char)v1;
      }
      v3 = (PVOID *)*v3;
    }
  }
  return (char)v1;
}
