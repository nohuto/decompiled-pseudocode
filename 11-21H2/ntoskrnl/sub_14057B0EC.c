/*
 * XREFs of sub_14057B0EC @ 0x14057B0EC
 * Callers:
 *     sub_14057AEEC @ 0x14057AEEC (sub_14057AEEC.c)
 *     sub_14057B0D0 @ 0x14057B0D0 (sub_14057B0D0.c)
 *     sub_14057B170 @ 0x14057B170 (sub_14057B170.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14057AFDC @ 0x14057AFDC (sub_14057AFDC.c)
 */

void sub_14057B0EC()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  char v2; // di

  v0 = 0LL;
  if ( qword_140C2A828 )
  {
    while ( 1 )
    {
      KeAcquireSpinLockAtDpcLevel(&qword_140D01980);
      v1 = *(_QWORD *)qword_140C2A828;
      if ( *(_QWORD *)qword_140C2A828 == *(_QWORD *)(qword_140C2A828 + 8) )
      {
        v2 = 0;
      }
      else
      {
        v0 = *(_QWORD *)(qword_140C2A828 + 8 * v1 + 16);
        v2 = 1;
        *(_QWORD *)qword_140C2A828 = (v1 + 1) % (unsigned __int64)(unsigned int)dword_140C2A824;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140D01980);
      if ( !v2 )
        break;
      sub_14057AFDC(v0);
    }
  }
}
