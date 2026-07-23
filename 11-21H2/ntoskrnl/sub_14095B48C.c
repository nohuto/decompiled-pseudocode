/*
 * XREFs of sub_14095B48C @ 0x14095B48C
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_140957BBC @ 0x140957BBC (sub_140957BBC.c)
 *     sub_14095B55C @ 0x14095B55C (sub_14095B55C.c)
 */

__int64 __fastcall sub_14095B48C(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  __int64 v3; // rdx
  int v4; // ebx
  _OWORD v6[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]

  memset(v6, 0, sizeof(v6));
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v7 = 0LL;
  if ( (int)sub_14074C6C0(v2, (ULONG_PTR)qword_14003A400, 1u, 0x38u, 0LL, (USHORT *)v6) < 0 )
  {
    v4 = sub_14095B55C(a1);
    if ( v4 < 0 )
    {
      sub_140765430(a1, 0, 48, -1073741790);
      v4 = -1073741106;
    }
  }
  else
  {
    sub_14042A5E0(*((_QWORD *)&v6[0] + 1), v3);
    v4 = 0;
  }
  sub_140957BBC();
  return (unsigned int)v4;
}
