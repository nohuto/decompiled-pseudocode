/*
 * XREFs of ??_G?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@UEAAPEAXI@Z @ 0x1800A3CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@UEAA@XZ @ 0x1800A40F4 (--1-$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@UEAA@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>::~wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x88uLL);
  return a1;
}
