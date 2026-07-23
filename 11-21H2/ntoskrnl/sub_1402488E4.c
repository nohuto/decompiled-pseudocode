/*
 * XREFs of sub_1402488E4 @ 0x1402488E4
 * Callers:
 *     IoWMIDeviceObjectToProviderId @ 0x1402487F0 (IoWMIDeviceObjectToProviderId.c)
 *     sub_140248854 @ 0x140248854 (sub_140248854.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1402488E4(void *a1)
{
  int *result; // rax

  for ( result = (int *)off_140C04398; result != (int *)&off_140C04398; result = *(int **)result )
  {
    if ( *((void **)result + 2) == a1 && result[12] >= 0 )
      return result;
  }
  return 0LL;
}
