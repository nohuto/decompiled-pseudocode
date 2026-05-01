/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x1805132A0
 * Callers:
 *     _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794 (_lambda_4efd027938208ec783bf057b80dc7741_--operator().c)
 *     _lambda_825306615c33696f43f5a813d6c29089_::operator() @ 0x180208004 (_lambda_825306615c33696f43f5a813d6c29089_--operator().c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4065fbdabcb0238c7b9491b60aa07d8e___::Run @ 0x18020B920 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4065fbdabcb0238c7b9491b60aa07d8e___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ea84869255a99aa3914583e116944a22___::Run @ 0x18020BAB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ea84869255a99aa3914583e116944a22___--Run.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18050EFD4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  char v0; // bl
  SC_HANDLE v1; // rax

  v0 = 0;
  if ( GetSystemMetrics(0x2000) )
    return 1;
  v1 = OpenSCManagerW(0LL, 0LL, 1u);
  if ( !v1 )
    return GetLastError() == 1115;
  CloseServiceHandle(v1);
  return v0;
}
