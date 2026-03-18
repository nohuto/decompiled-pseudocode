/*
 * XREFs of ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0003100
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0036E00 (memmove.c)
 */

void __fastcall FxIoContext::CopyParameters(FxIoContext *this, FxRequestBase *Request)
{
  unsigned __int8 m_MajorFunction; // al
  void *m_BufferToFree; // rdx
  _IRP *m_Irp; // r8
  void *UserBuffer; // rcx

  m_MajorFunction = this->m_MajorFunction;
  if ( m_MajorFunction == 3 || m_MajorFunction == 4 )
  {
    this->m_CompletionParams.Parameters.Write.Length = this->m_CompletionParams.IoStatus.Information;
  }
  else if ( (unsigned __int8)(m_MajorFunction - 14) <= 1u )
  {
    this->m_CompletionParams.Parameters.Ioctl.Output.Length = this->m_CompletionParams.IoStatus.Information;
  }
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree && this->m_CopyBackToBuffer )
  {
    m_Irp = Request->m_Irp.m_Irp;
    UserBuffer = m_Irp->UserBuffer;
    if ( UserBuffer )
    {
      memmove(UserBuffer, m_BufferToFree, m_Irp->IoStatus.Information);
      this->m_CopyBackToBuffer = 0;
    }
  }
}
