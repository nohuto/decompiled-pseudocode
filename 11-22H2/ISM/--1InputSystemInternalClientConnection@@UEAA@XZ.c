/*
 * XREFs of ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x180149FC4
 * Callers:
 *     ??_GInputSystemInternalClientConnection@@UEAAPEAXI@Z @ 0x18014A040 (--_GInputSystemInternalClientConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800B9658 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall InputSystemInternalClientConnection::~InputSystemInternalClientConnection(
        InputSystemInternalClientConnection *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v2, *((_QWORD *)this + 33));
    std::_Deallocate<16,0>(
      *((void **)this + 32),
      (*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)this + 31);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((InputSystemInternalClientConnection *)((char *)this + 8));
}
