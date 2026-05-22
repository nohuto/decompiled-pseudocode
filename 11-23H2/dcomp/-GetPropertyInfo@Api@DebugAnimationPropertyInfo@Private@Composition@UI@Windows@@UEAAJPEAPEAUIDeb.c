/*
 * XREFs of ?GetPropertyInfo@Api@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@UEAAJPEAPEAUIDebugReference@3456@PEA_KPEAPEAUHSTRING__@@PEAIPEAPEAUIInspectable@@PEAW4AnimationDebugPropertyInfoType@3456@@Z @ 0x1801A3160
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetPropertyInfo@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@QEAAJPEAPEAUIDebugReference@2345@PEA_KPEAPEAUHSTRING__@@PEAIPEAPEAUIInspectable@@PEAW4AnimationDebugPropertyInfoType@2345@@Z @ 0x1801A328C (-GetPropertyInfo@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@QEAAJPEAPEAUIDebugRe.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::DebugAnimationPropertyInfo::Api::GetPropertyInfo(
        Windows::UI::Composition::Private::DebugAnimationPropertyInfo::Api *this,
        struct Windows::UI::Composition::Private::IDebugReference **a2,
        unsigned __int64 *a3,
        HSTRING *a4,
        unsigned int *a5,
        struct IInspectable **a6,
        enum Windows::UI::Composition::Private::AnimationDebugPropertyInfoType *a7)
{
  Windows::UI::Composition::Private::DebugAnimationPropertyInfo *v7; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int v14; // edx
  int PropertyInfo; // eax

  v7 = (Windows::UI::Composition::Private::DebugAnimationPropertyInfo::Api *)((char *)this - 128);
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
  if ( (*((_BYTE *)v7 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        if ( a5 )
        {
          if ( a6 )
          {
            if ( a7 )
            {
              PropertyInfo = Windows::UI::Composition::Private::DebugAnimationPropertyInfo::GetPropertyInfo(
                               v7,
                               a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7);
              v12 = PropertyInfo;
              if ( PropertyInfo >= 0 )
              {
                v12 = 0;
                goto LABEL_17;
              }
              v14 = 107;
              v13 = PropertyInfo;
            }
            else
            {
              v13 = -2147024809;
              v14 = 105;
              v12 = -2147024809;
            }
          }
          else
          {
            v13 = -2147024809;
            v14 = 104;
            v12 = -2147024809;
          }
        }
        else
        {
          v13 = -2147024809;
          v14 = 103;
          v12 = -2147024809;
        }
      }
      else
      {
        v13 = -2147024809;
        v14 = 102;
        v12 = -2147024809;
      }
    }
    else
    {
      v13 = -2147024809;
      v14 = 101;
      v12 = -2147024809;
    }
    DoStackCaptureDirect(v13, v14);
    goto LABEL_17;
  }
  v12 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_17:
  Microsoft::WRL2::ContextSession::EndApiEntry(v9);
  return v12;
}
