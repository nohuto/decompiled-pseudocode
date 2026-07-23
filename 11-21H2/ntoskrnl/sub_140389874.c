/*
 * XREFs of sub_140389874 @ 0x140389874
 * Callers:
 *     sub_140751A80 @ 0x140751A80 (sub_140751A80.c)
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140389874(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 **v2; // rax
  __int64 **v3; // rax

  v1 = (__int64 *)*a1;
  if ( !*((_BYTE *)a1 + 33) )
  {
    if ( (__int64 *)v1[1] == a1 )
    {
      v2 = (__int64 **)a1[1];
      if ( *v2 == a1 )
      {
        *v2 = v1;
        v1[1] = (__int64)v2;
        *((_DWORD *)a1 + 4) = 0;
        a1[1] = (__int64)a1;
        *a1 = (__int64)a1;
        ExFreePoolWithTag(a1, 0x74655350u);
        return;
      }
    }
LABEL_5:
    __fastfail(3u);
  }
  if ( (__int64 *)v1[1] != a1 )
    goto LABEL_5;
  v3 = (__int64 **)a1[1];
  if ( *v3 != a1 )
    goto LABEL_5;
  *v3 = v1;
  v1[1] = (__int64)v3;
  a1[1] = (__int64)a1;
  *a1 = (__int64)a1;
  KeSetEvent(&stru_140C23820, 0, 0);
}
