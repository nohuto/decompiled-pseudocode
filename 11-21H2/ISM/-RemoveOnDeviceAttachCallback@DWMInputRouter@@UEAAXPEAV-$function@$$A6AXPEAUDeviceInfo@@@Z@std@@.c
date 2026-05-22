/*
 * XREFs of ?RemoveOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x18019B580
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 */

void *__fastcall DWMInputRouter::RemoveOnDeviceAttachCallback(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char *i; // rcx
  void *result; // rax

  v2 = *(char **)(a1 + 616);
  for ( i = *(char **)(a1 + 608); i != v2 && *(_QWORD *)i != a2; i += 8 )
    ;
  result = memmove_0(i, i + 8, v2 - (i + 8));
  *(_QWORD *)(a1 + 616) -= 8LL;
  return result;
}
