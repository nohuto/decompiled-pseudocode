/*
 * XREFs of ?TrackAPOFailureUnhandled@CAudioProcessor@@UEAAJM@Z @ 0x14008F640
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?TrackAPOFailureUnhandled@CAPONode@@QEAAXM@Z @ 0x14008EA7C (-TrackAPOFailureUnhandled@CAPONode@@QEAAXM@Z.c)
 */

__int64 __fastcall CAudioProcessor::TrackAPOFailureUnhandled(CAudioProcessor *this, float a2)
{
  __int64 ****v2; // rax
  __int64 ***v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 **v5; // rcx
  unsigned __int64 v6; // rax

  v2 = (__int64 ****)*((_QWORD *)this + 96);
  if ( v2 )
  {
    v3 = *v2;
    v4 = 0LL;
    if ( *v2 )
    {
      while ( v4 < (unsigned __int64)v3[2] )
      {
        v5 = *v3;
        if ( !*v3 )
          goto LABEL_10;
        if ( v4 )
        {
          v6 = v4;
          do
          {
            v5 = (__int64 **)*v5;
            --v6;
          }
          while ( v6 );
        }
        if ( !v5 )
LABEL_10:
          ATL::AtlThrowImpl(-2147467259);
        CAPONode::TrackAPOFailureUnhandled((CAPONode *)v5[2], a2);
        ++v4;
      }
    }
  }
  return 0LL;
}
