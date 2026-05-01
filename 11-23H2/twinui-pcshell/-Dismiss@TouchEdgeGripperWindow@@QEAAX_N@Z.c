/*
 * XREFs of ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x18065B170
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

void __fastcall TouchEdgeGripperWindow::Dismiss(TouchEdgeGripperWindow *this, char a2)
{
  if ( a2 )
    TouchEdgeGripperWindow::StartDismissAnimation(this);
  else
    TouchEdgeGripperWindow::DestroyXamlWindow(this);
}
