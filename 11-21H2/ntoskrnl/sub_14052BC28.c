/*
 * XREFs of sub_14052BC28 @ 0x14052BC28
 * Callers:
 *     sub_140A63680 @ 0x140A63680 (sub_140A63680.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14052BC28(int a1)
{
  unsigned __int8 v2; // dl
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 *i; // rdx

  v2 = *((_BYTE *)KeGetCurrentPrcb() + 64);
  if ( v2 < 0xFu )
    return 0LL;
  if ( v2 > 0x12u )
  {
    if ( v2 == 20 )
    {
      v3 = qword_14003ABA8;
      goto LABEL_11;
    }
    if ( v2 == 21 )
    {
      v3 = qword_14003AB88;
      goto LABEL_11;
    }
    if ( v2 != 22 )
    {
      if ( v2 == 23 )
      {
        v3 = qword_14003AB68;
        goto LABEL_11;
      }
      return 0LL;
    }
  }
  v3 = (__int64 *)"\n";
LABEL_11:
  v4 = 0LL;
  for ( i = v3; *(_DWORD *)i != a1; i += 2 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 2 )
      return 0LL;
  }
  return v3[2 * v4 + 1];
}
