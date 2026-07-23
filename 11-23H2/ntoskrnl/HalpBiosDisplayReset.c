/*
 * XREFs of HalpBiosDisplayReset @ 0x1404FF450
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x1403BE570 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
